#include "Canvas.h"

int Canvas::m_counter(0);


Canvas::Canvas(const Point & p, Color c = Color::white, const int & maxsize = 0) : Shape(p, c)
{
	m_maxsize = maxsize;
	m_length = 0;
	m_counter++;
	if (m_maxsize)
	{
		m_shapes = new Shape*[m_maxsize];
		if (!m_shapes)
		{
			cout << "error!" << endl;
			exit(1);
		}
	}
	else
		m_shapes = nullptr;
}

Canvas::~Canvas()
{
	if (m_shapes)
		delete[] m_shapes;
	m_counter--;
}

void Canvas::draw() const //printing
{
	cout << "------------------- " << m_color << " canvas" << " -------------------" << endl;
	for (int i = 0; i < m_length; i++)
	{
		//Point temp_org(m_shapes[i]->get_org());
		//m_shapes[i]->move(m_org);
		//m_shapes[i]->draw();
		//m_shapes[i]->move(temp_org);
		Shape* temp = m_shapes[i];

	}
	cout << "------------------- " << "end canvas" << " -------------------" << endl;
}

void Canvas::scale(const int & factor)
{
	for (int i = 0; i < m_maxsize; i++)
		m_shapes[i]->scale(factor);
}

double Canvas::area()
{
	double temp = 0;
	for (int i = 0; i < m_length; i++)
		temp += m_shapes[i]->area();
	return temp;
}

bool Canvas::insert_shape(Shape * shape)
{
	if (m_length == m_maxsize)
	{
		cout << "error!, the canvas is full." << endl;
		return false;
	}
	else
	{
		m_length++;
		m_shapes[m_length - 1] = shape;
		return true;
	}
}

int Canvas::get_maxsize()
{
	return m_maxsize;
}



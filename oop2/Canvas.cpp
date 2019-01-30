#include "Canvas.h"

int Canvas::m_counter(0);

Canvas::Canvas(const Point& p = Point(0,0) , Color c = Color::white) : Shape(p,c)
{
	m_shapes = nullptr;
	m_length = 0;
	m_counter++;
}

Canvas::~Canvas()
{
	if (m_shapes)
		delete[] m_shapes;
	m_counter--;
}

void Canvas::draw() //printing
{
	cout << "------------------- " << m_color << " canvas" << " -------------------" << endl;
	for (int i = 0; i < m_length; i++)
	{
		Point temp_org(m_shapes[i]->get_org());
		m_shapes[i]->move(m_org);
		m_shapes[i]->draw();
		m_shapes[i]->move(temp_org);
	}
	cout << "------------------- " << "end canvas" << " -------------------" << endl;
}

void Canvas::scale(const int & factor)
{
	for (int i = 0; i < m_length; i++)
		(*m_shapes)[i].scale(factor);
}

double Canvas::area()
{
	double temp = 0;
	for (int i = 0; i < m_length; i++)
		temp += (*m_shapes)[i].area();
	return temp;
}

void Canvas::insert_shape(Shape * shape)
{
	Shape** temp = new Shape*[m_length + 1];
	for (int i = 0; i < m_length; i++)
		temp[i] = m_shapes[i];
	temp[m_length] = shape;
	if(m_shapes)
		delete[] m_shapes;
	m_shapes = temp;
	m_length++;
}

//Canvas & Canvas::operator=(const Canvas & c)
//{
//	m_length = c.m_length;
//	delete[] m_shapes;
//	Shape** m_shapes = new Shape*[m_length];
//	for (int i = 0; i < m_length; i++)
//		m_shapes[i] = c.m_shapes[i];
//	return *this;
//}


#pragma once
class Shape
{
public:
	Shape(const Shape&) = delete;
	Shape& operator=(const Shape&) = delete;
	// this means no copy operations; useful for super class

	explicit Shape(int s); // no implicit conversion from into to shape
	// USE EXPLICIT FOR SINGLE ARG CONSTUCTORS UNLESS THERE'S A SPECIAL REASON NOT TO

};

//Unless there is a really good reason not to, design containers in the style  
//of the standard-library containers (Chapter  11). In particular, make the container  
//resource safe by implementing it as a handle with appropriate essential operations (§5.1.1, §5.2)
/*************************************************************************/
/*  link_button.h                                                        */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                    http://www.godotengine.org                         */
/*************************************************************************/
/* Copyright (c) 2007-2016 Juan Linietsky, Ariel Manzur.                 */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/
#ifndef LINKBUTTON_H
#define LINKBUTTON_H


#include "scene/gui/base_button.h"
#include "scene/resources/bit_mask.h"

class LinkButton : public BaseButton {

	OBJ_TYPE( LinkButton, BaseButton );
public:

	enum UnderlineMode {
		UNDERLINE_MODE_ALWAYS,
		UNDERLINE_MODE_ON_HOVER
	};
private:
	String text;
	UnderlineMode underline_mode;

protected:

	virtual Size2 get_minimum_size() const;
	void _notification(int p_what);
	static void _bind_methods();

public:

	void set_text(const String& p_text);
	String get_text() const;

	void set_underline_mode(UnderlineMode p_underline_mode);
	UnderlineMode get_underline_mode() const;

	LinkButton();
};

VARIANT_ENUM_CAST( LinkButton::UnderlineMode );

#endif // LINKBUTTON_H

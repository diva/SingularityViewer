/**
* @file daeexport.h
* @brief A system which allows saving in-world objects to Collada .DAE files for offline texturizing/shading.
* @authors Latif Khalifa
*
* $LicenseInfo:firstyear=2011&license=LGPLV3$
* Copyright (C) 2013 Latif Khalifa
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General
* Public License along with this library; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA */

#ifndef DAEEXPORT_H_
#define DAEEXPORT_H_

#include <dom/domElements.h>

class LLViewerObject;

class DAESaver
{
	typedef std::vector<std::pair<LLViewerObject*,std::string> > obj_info_t;

public:
	obj_info_t mObjects;
	LLVector3 mOffset;
	DAESaver();
	void Add(const LLViewerObject* prim, const std::string name);
	bool saveDAE(std::string filename);

private:
	void DAESaveAccessor(domAccessor* acc, int numValues, std::string params);
};

#endif // DAEEXPORT_H_

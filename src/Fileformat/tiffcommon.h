/*
 * This file is a part of Luminance HDR package.
 * ----------------------------------------------------------------------
 * Copyright (C) 2013 Davide Anastasia
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * ----------------------------------------------------------------------
 */

#ifndef TIFFCOMMON_H
#define TIFFCOMMON_H

#include <iostream>
#include <tiffio.h>
#include <Libpfs/utils/resourcehandler.h>

struct CleanUpTiffFile
{
    static inline
    void cleanup(TIFF* profile) {
        if ( profile ) {
#ifndef NDEBUG
            std::clog << "CleanUpTiffFile::cleanup()\n";
#endif
            TIFFClose(profile);
        }
    }
};
typedef pfs::utils::ResourceHandler<TIFF, CleanUpTiffFile> ScopedTiffFile;

#endif // TIFFCOMMON_H

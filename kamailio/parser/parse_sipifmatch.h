/*
 * Copyright (C) 2004 Jamey Hicks, jamey dot hicks at hp dot com
 *
 * This file is part of SIP-router, a free SIP server.
 *
 * SIP-router is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * SIP-router is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*! \file
 * \brief Parser :: Parse if-match header
 *
 * \ingroup parser
 */

#ifndef PARSE_SIPIFMATCH_H
#define PARSE_SIPIFMATCH_H

#include "../str.h"
#include "hf.h"

typedef struct etag {
	str text;       /* Original string representation */
} etag_t;


/*! \brief
 * Parse Sipifmatch HF body
 */
int parse_sipifmatch(struct hdr_field* _h);


/*! \brief
 * Release memory
 */
void free_sipifmatch(str** _e);


#endif /* PARSE_SIPIFMATCH_H */
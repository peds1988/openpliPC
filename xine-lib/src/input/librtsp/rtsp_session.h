/*
 * Copyright (C) 2000-2003 the xine project
 *
 * This file is part of xine, a free video player.
 *
 * xine is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * xine is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 * high level interface to rtsp servers.
 */

#ifndef HAVE_RTSP_SESSION_H
#define HAVE_RTSP_SESSION_H

typedef struct rtsp_session_s rtsp_session_t;

rtsp_session_t *rtsp_session_start(xine_stream_t *stream, char *mrl) XINE_MALLOC;

void rtsp_session_set_start_time(rtsp_session_t *this, int start_time);

int rtsp_session_read(rtsp_session_t *session, char *data, int len);

int rtsp_session_peek_header(rtsp_session_t *this, char *buf, int maxsize);

void rtsp_session_end(rtsp_session_t *session);

#endif

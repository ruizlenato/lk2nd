/* Copyright (c) 2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_HX8379A_FWVGA_SKUA_VIDEO_H_
#define _PANEL_HX8379A_FWVGA_SKUA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config hx8379a_fwvga_skua_video_panel_data = {
	"qcom,mdss_dsi_hx8379a_fwvga_skua_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution hx8379a_fwvga_skua_video_panel_res = {
	480, 854, 100, 94, 40, 0, 6, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info hx8379a_fwvga_skua_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char hx8379a_fwvga_video_on_cmd0[] = {
	0x04, 0x00, 0x39, 0xC0,
	0xB9, 0xFF, 0x83, 0x79,
};

static char hx8379a_fwvga_video_on_cmd1[] = {
	0x03, 0x00, 0x39, 0xC0,
	0xBA, 0x51, 0x93, 0xFF,
};

static char hx8379a_fwvga_video_on_cmd2[] = {
	0x14, 0x00, 0x39, 0xC0,
	0xB1, 0x00, 0x50, 0x24,
	0xEA, 0x51, 0x08, 0x11,
	0x10, 0xF0, 0x27, 0x2F,
	0x9A, 0x1A, 0x42, 0x0B,
	0x7A, 0xF1, 0x00, 0xE6,
};

static char hx8379a_fwvga_video_on_cmd3[] = {//modified
	0x0E, 0x00, 0x39, 0xC0,
	0xB2, 0x00, 0x00, 0xFE,
	0x06, 0x06, 0x19, 0x44,
	0x00, 0xFF, 0x07, 0x03,
	0x19, 0x20, 0xFF, 0xFF,
};

static char hx8379a_fwvga_video_on_cmd4[] = {//modified
	0x20, 0x00, 0x39, 0xC0,
	0xB4, 0x80, 0x08, 0x00,
	0x32, 0x10, 0x03, 0x32,
	0x13, 0x70, 0x32, 0x10,
	0x08, 0x37, 0x01, 0x28,
	0x07, 0x37, 0x08, 0x2D,
	0x08, 0x35, 0x46, 0x06,
	0x00, 0x40, 0x08, 0x28,
	0x08, 0x30, 0x30, 0x04,
};

static char hx8379a_fwvga_video_on_cmd5[] = {
	0xcc, 0x02, 0x23, 0x80
};

static char hx8379a_fwvga_video_on_cmd6[] = {
	0x30, 0x00, 0x39, 0xC0,
	0xD5, 0x00, 0x00, 0x0A,
	0x00, 0x01, 0x05, 0x00,
	0x03, 0x00, 0x88, 0x88,
	0x88, 0x88, 0x23, 0x01,
	0x67, 0x45, 0x02, 0x13,
	0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x54, 0x76,
	0x10, 0x32, 0x31, 0x20,
	0x88, 0x88, 0x88, 0x88,
	0x88, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};


static char hx8379a_fwvga_video_on_cmd7[] = {
	0x24, 0x00, 0x39, 0xC0,
	0xE0, 0x79, 0x00, 0x0F,
	0x14, 0x22, 0x22, 0x39,
	0x2F, 0x43, 0x04, 0x0A,
	0x12, 0x14, 0x17, 0x15,
	0x16, 0x12, 0x16, 0x00,
	0x0F, 0x14, 0x22, 0x22,
	0x39, 0x2F, 0x43, 0x04,
	0x0A, 0x12, 0x14, 0x17,
	0x15, 0x16, 0x12, 0x16,
};

static char hx8379a_fwvga_video_on_cmd8[] = { //modified
	0x05, 0x00, 0x39, 0xC0,
	0xB6, 0x00, 0xA5, 0x00,
	0xA5, 0xFF, 0xFF, 0xFF,
};

static char hx8379a_fwvga_video_on_cmd9[] = {
	0x11, 0x00, 0x05, 0x80
};

static char hx8379a_fwvga_video_on_cmd10[] = {
	0x29, 0x00, 0x05, 0x80
};


static struct mipi_dsi_cmd hx8379a_fwvga_skua_video_on_command[] = {
	{0x8, hx8379a_fwvga_video_on_cmd0, 0x00},
	{0x8, hx8379a_fwvga_video_on_cmd1, 0x00},
	{0x18, hx8379a_fwvga_video_on_cmd2, 0x00},
	{0x14, hx8379a_fwvga_video_on_cmd3, 0x00},
	{0x24, hx8379a_fwvga_video_on_cmd4, 0x00},
	{0x04, hx8379a_fwvga_video_on_cmd5, 0x00},
	{0x34, hx8379a_fwvga_video_on_cmd6, 0x00},
	{0x28, hx8379a_fwvga_video_on_cmd7, 0x00},
	{0xc, hx8379a_fwvga_video_on_cmd8, 0x00},
	{0x4, hx8379a_fwvga_video_on_cmd9, 0x96},
	{0x4, hx8379a_fwvga_video_on_cmd10, 0x78}
};

#define HX8379A_FWVGA_SKUA_VIDEO_ON_COMMAND 11


static char hx8379a_fwvga_skua_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char hx8379a_fwvga_skua_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd hx8379a_fwvga_skua_video_off_command[] = {
	{0x4, hx8379a_fwvga_skua_videooff_cmd0, 0x32},
	{0x4, hx8379a_fwvga_skua_videooff_cmd1, 0x78}
};

#define HX8379A_FWVGA_SKUA_VIDEO_OFF_COMMAND 2


static struct command_state hx8379a_fwvga_skua_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info hx8379a_fwvga_skua_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info hx8379a_fwvga_skua_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration hx8379a_fwvga_skua_video_lane_config = {
	2, 0, 1, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t hx8379a_fwvga_skua_video_timings[] = {
	0x70, 0x23, 0x1C, 0x00, 0x36, 0x36, 0x10, 0x25, 0x2C, 0x03, 0x04, 0x00
};

static struct mipi_dsi_cmd hx8379a_fwvga_skua_video_rotation[] = {

};
#define HX8379A_FWVGA_SKUA_VIDEO_ROTATION 0

static struct panel_timing hx8379a_fwvga_skua_video_timing_info = {
	0, 4, 0x1F, 0x2C
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence hx8379a_fwvga_skua_video_reset_seq = {
	{1, 0, 1, }, {20, 20, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight hx8379a_fwvga_skua_video_backlight = {
	1, 1, 4095, 100, 1, "PMIC_8941"
};

#define HX8379A_FWVGA_SKUA_VIDEO_SIGNATURE 0xFFFF

#endif /*_PANEL_HX8379A_FWVGA_SKUA_VIDEO_H_*/

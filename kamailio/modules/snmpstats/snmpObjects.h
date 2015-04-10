/*
 * $Id$
 *
 * SNMPStats Module 
 * Copyright (C) 2006 SOMA Networks, INC.
 * Written by: Jeffrey Magder (jmagder@somanetworks.com)
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 *
 * History:
 * --------
 * 2006-11-23 initial version (jmagder)
 * 
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf,v 1.9 2005/01/07 09:37:18 dts12 Exp $
 *
 * This file defines all registration and handling of all scalars defined in the
 * KAMAILIO-MIB.  Please see KAMAILIO-MIB for the complete descriptions of the
 * individual scalars.
 *
 */

#ifndef KAMAILIOOBJECTS_H
#define KAMAILIOOBJECTS_H

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* function declarations */
void init_kamailioObjects(void);

Netsnmp_Node_Handler handle_kamailioMsgQueueDepth;
Netsnmp_Node_Handler handle_kamailioMsgQueueMinorThreshold;
Netsnmp_Node_Handler handle_kamailioMsgQueueMajorThreshold;
Netsnmp_Node_Handler handle_kamailioMsgQueueDepthAlarmStatus;
Netsnmp_Node_Handler handle_kamailioMsgQueueDepthMinorAlarm;
Netsnmp_Node_Handler handle_kamailioMsgQueueDepthMajorAlarm;
Netsnmp_Node_Handler handle_kamailioCurNumDialogs;
Netsnmp_Node_Handler handle_kamailioCurNumDialogsInProgress;
Netsnmp_Node_Handler handle_kamailioCurNumDialogsInSetup;
Netsnmp_Node_Handler handle_kamailioTotalNumFailedDialogSetups;
Netsnmp_Node_Handler handle_kamailioDialogLimitMinorThreshold;
Netsnmp_Node_Handler handle_kamailioDialogLimitMajorThreshold;
Netsnmp_Node_Handler handle_kamailioTotalNumDialogSetups;
Netsnmp_Node_Handler handle_kamailioDialogUsageState;
Netsnmp_Node_Handler handle_kamailioDialogLimitAlarmStatus;
Netsnmp_Node_Handler handle_kamailioDialogLimitMinorAlarm;
Netsnmp_Node_Handler handle_kamailioDialogLimitMajorAlarm;

/* The following four functions are used to retrieve thresholds set via the
 * kamailio.cfg configuration file. */
int get_msg_queue_minor_threshold(void);
int get_msg_queue_major_threshold(void);
int get_dialog_minor_threshold(void);
int get_dialog_major_threshold(void);

#endif /* KAMAILIOOBJECTS_H */

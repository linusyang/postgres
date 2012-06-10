/*-------------------------------------------------------------------------
 *
 * nodeNestloop.h
 *
 *
 *
 * Portions Copyright (c) 1996-2011, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeNestloop.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODENESTLOOP_H
#define NODENESTLOOP_H

#include "nodes/execnodes.h"

extern NestLoopState *ExecInitNestLoop(NestLoop *node, EState *estate, int eflags);
extern TupleTableSlot *ExecNestLoop(NestLoopState *node);
extern void ExecEndNestLoop(NestLoopState *node);
extern void ExecReScanNestLoop(NestLoopState *node);

/* Database Project - Modified by Linus Yang */
/* Task 2 - Block Nested Loop Join */
extern int nlj_block_size;
extern TupleTableSlot *ExecInnerNestLoop(NestLoopState *node);
extern int  getTupleBlock(PlanState *outerPlan, NestLoopState *node);

#endif   /* NODENESTLOOP_H */

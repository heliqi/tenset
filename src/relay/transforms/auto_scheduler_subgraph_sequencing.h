/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*!
 * \file auto_scheduler_subgraph_sequencing.h
 * \brief add index for subgraph
 */


#ifndef TVM_RELAY_TRANSFORMS_AUTO_SCHEDULER_SUBGRAPH_SEQUENCING_H_
#define TVM_RELAY_TRANSFORMS_AUTO_SCHEDULER_SUBGRAPH_SEQUENCING_H_

#include <tvm/relay/expr_functor.h>

namespace tvm {
namespace relay {

class AutoSchedulerSubGraphSequence : public ExprMutator {
 public:
  Expr VisitExpr_(const CallNode* n) final;

 static int index;
};

}  // namespace relay
}  // namespace tvm

#endif  // TVM_RELAY_TRANSFORMS_AUTO_SCHEDULER_SUBGRAPH_SEQUENCING_H_

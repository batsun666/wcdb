/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <WCDB/WCTSelectBase.h>
#import <WCDB/WCTDeclare.h>

/**
 Not Thread-safe
 */
@interface WCTMultiSelect : WCTSelectBase

/**
 Get next selected object. You can do an iteration using it.
 
 WCTMultiObject* multiObject = nil;
 while ((multiObject = [multiSelect nextMultiObject])) {
    Class1* object1 = [multiObject objectForKey:Class1.class];
    Class2* object2 = [multiObject objectForKey:Class2.class];
    //...
 }

 @return See the example above
 */
- (WCTMultiObject*)nextMultiObject;

/**
 Get all selected objects. 

 @return Array with all selected objects.
 */
- (NSArray<WCTMultiObject*>*)allMultiObjects;

@end
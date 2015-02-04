//
//  HotAddressListSectionHeader.h
//  bither-ios
//
//  Copyright 2014 http://Bither.net
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>

@protocol SectionHeaderPressedDelegate <NSObject>

-(void)sectionHeaderPressed:(NSUInteger)section;

-(BOOL)isSectionFolded:(NSUInteger)section;

@optional
-(void)hdmAddPressed;
-(void)hdmSeedPressed;

@end

@interface HotAddressListSectionHeader : UIView
-(instancetype)initWithSize:(CGSize)size isHDM:(BOOL)hdm isPrivate:(BOOL)isPrivate section:(NSUInteger)section  delegate:(NSObject<SectionHeaderPressedDelegate>*)delegate;

@property (weak) NSObject<SectionHeaderPressedDelegate>* delegate;
@end

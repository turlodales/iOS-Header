//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class NSArray, PSSearchModel;

@protocol PSSearchModelDataSource <NSObject>
- (NSArray *)rootSpecifiersForSearchModel:(PSSearchModel *)arg1;

@optional
- (Class)rootSearchControllerClassForSearchModel:(PSSearchModel *)arg1;
@end


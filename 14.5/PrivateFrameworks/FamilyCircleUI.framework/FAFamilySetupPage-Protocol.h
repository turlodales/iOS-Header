//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class ACAccount, ACAccountStore;
@protocol FAFamilySetupPageDelegate;

@protocol FAFamilySetupPage <NSObject>
@property(nonatomic) __weak id <FAFamilySetupPageDelegate> delegate;
- (id)initWithAccount:(ACAccount *)arg1 store:(ACAccountStore *)arg2;
@end


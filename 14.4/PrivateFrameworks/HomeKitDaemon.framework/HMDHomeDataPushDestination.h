//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

@interface HMDHomeDataPushDestination : NSObject
{
    _Bool _ignoreConfigCompare;
    NSString *_username;
    HMDUser *_user;
    NSString *_destination;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSString *pushDestination;
- (id)description;
- (id)initWithUser:(id)arg1 destination:(id)arg2;

@end


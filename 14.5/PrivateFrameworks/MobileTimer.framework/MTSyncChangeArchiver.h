//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyedArchiver.h>

#import <MobileTimer/MTSerializer-Protocol.h>

@class NSCoder;

@interface MTSyncChangeArchiver : NSKeyedArchiver <MTSerializer>
{
}

@property(readonly, nonatomic) unsigned long long mtType;
@property(readonly, nonatomic) NSCoder *mtCoder;

@end


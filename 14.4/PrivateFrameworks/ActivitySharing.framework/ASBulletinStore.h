//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASBulletinStore : NSObject
{
    NSArray *_bulletins;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
- (void)_persistBulletins;
- (void)removeBulletinsMatchingCriteria:(CDUnknownBlockType)arg1;
- (void)removeAllBulletins;
- (void)addBulletins:(id)arg1;
- (id)init;

@end


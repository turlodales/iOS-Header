//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol HAP2AccessoryServerCoordinatorPrivate;

@interface HAP2AccessoryServerBrowserCoordinatorInfo : NSObject
{
    id <HAP2AccessoryServerCoordinatorPrivate> _coordinator;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id <HAP2AccessoryServerCoordinatorPrivate> coordinator; // @synthesize coordinator=_coordinator;
- (id)initWithCoordinator:(id)arg1;

@end


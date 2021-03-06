//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface COSRegistryDispatcher : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _clientBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType clientBlock; // @synthesize clientBlock=_clientBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)invalidate;
- (void)nanoRegistryBecameActive;
- (void)nanoRegistryStatusChanged:(id)arg1;
- (id)initWithBecameReadyCompletion:(CDUnknownBlockType)arg1 andTimeout:(double)arg2;

@end


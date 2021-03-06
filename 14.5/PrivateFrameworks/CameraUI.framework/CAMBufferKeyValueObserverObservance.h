//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMBufferObservance.h>

@class NSObject, NSString;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance
{
    NSObject *_object;
    NSString *_keyPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak NSObject *object; // @synthesize object=_object;
- (void)teardownObservanceForBuffer:(id)arg1;
- (void)setupObservanceForBuffer:(id)arg1;
- (_Bool)shouldBeFulfilledByChange:(id)arg1;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(CDUnknownBlockType)arg3 removedOnceEnabled:(_Bool)arg4;

@end


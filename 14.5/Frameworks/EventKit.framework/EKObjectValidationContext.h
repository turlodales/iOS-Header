//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectValidationContext : NSObject
{
    _Bool _reachedMaxDepth;
    EKObject *_rootObject;
    unsigned long long _depth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool reachedMaxDepth; // @synthesize reachedMaxDepth=_reachedMaxDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) EKObject *rootObject; // @synthesize rootObject=_rootObject;
- (void)faultIfNeededForObject:(id)arg1;
- (id)initWithRootObject:(id)arg1;

@end


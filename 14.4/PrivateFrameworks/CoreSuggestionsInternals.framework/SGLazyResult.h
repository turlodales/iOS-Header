//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGLazyResult : NSObject
{
    id _data;
    struct _opaque_pthread_mutex_t _lock;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id resultIfAvailable;
@property(readonly, nonatomic) id result;
- (void)dealloc;
- (id)initWithResult:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithBlock:(CDUnknownBlockType)arg1;
- (id)_init;

@end


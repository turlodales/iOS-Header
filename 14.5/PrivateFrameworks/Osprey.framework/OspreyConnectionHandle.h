//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OspreyConnectionHandle : NSObject
{
    CDUnknownBlockType _willRelease;
    id _connectionKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id connectionKey; // @synthesize connectionKey=_connectionKey;
- (void)dealloc;
- (id)initWithConnectionKey:(id)arg1 willRelease:(CDUnknownBlockType)arg2;

@end


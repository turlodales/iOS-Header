//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;

@end


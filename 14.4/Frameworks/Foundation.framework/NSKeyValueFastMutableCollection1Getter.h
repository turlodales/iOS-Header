//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueNonmutatingCollectionMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter
{
    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;
}

- (id)mutatingMethods;
- (id)nonmutatingMethods;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;

@end


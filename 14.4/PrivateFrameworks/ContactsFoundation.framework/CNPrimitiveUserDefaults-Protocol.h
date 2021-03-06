//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString;

@protocol CNPrimitiveUserDefaults <NSObject>
- (void)setupAutosync;
- (_Bool)synchronize;
- (void)primitiveRemoveObjectForKey:(NSString *)arg1;
- (_Bool)primitiveBoolValueForKey:(NSString *)arg1 keyExists:(_Bool *)arg2;
- (long long)primitiveIntegerValueForKey:(NSString *)arg1 keyExists:(_Bool *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(NSString *)arg2;
- (id)primitiveObjectForKey:(NSString *)arg1;
@end


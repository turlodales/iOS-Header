//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject <NSCopying>
{
    _Bool _immutable;
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
- (void)markReadOnly;
- (void)assertMutable:(SEL)arg1;
- (id)replicate;
- (_Bool)checkEqualTo:(id)arg1;
- (long long)hashInto:(long long)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)writableInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


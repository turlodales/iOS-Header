//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemKind : NSObject <NSCopying>
{
    NSString *_itemClassName;
    const struct __CFString *_secItemClass;
    NSArray *_properties;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) const struct __CFString *secItemClass; // @synthesize secItemClass=_secItemClass;
@property(copy, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributesByName;
- (void)dealloc;
- (id)init;

@end


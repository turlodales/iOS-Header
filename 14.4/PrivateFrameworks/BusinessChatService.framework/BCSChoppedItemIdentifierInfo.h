//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCSLinkItemIdentifier;

__attribute__((visibility("hidden")))
@interface BCSChoppedItemIdentifierInfo : NSObject
{
    BCSLinkItemIdentifier *_itemIdentifier;
    long long _chopID;
}

+ (id)newWithLinkItemIdentifier:(id)arg1 chopID:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long chopID; // @synthesize chopID=_chopID;
@property(retain, nonatomic) BCSLinkItemIdentifier *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

@end


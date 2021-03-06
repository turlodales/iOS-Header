//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SSWishlist;

__attribute__((visibility("hidden")))
@interface SKUIWishlist : NSObject
{
    SSWishlist *_database;
}

+ (id)activeWishlist;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeItemsWithItemIdentifiers:(id)arg1;
- (void)postChangeNotification;
@property(readonly, copy, nonatomic) NSArray *items;
- (_Bool)containsItemWithIdentifier:(long long)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) long long accountIdentifier;
- (id)initWithAccountIdentifier:(long long)arg1;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SKUIItem, SKUIStorePageViewController;

@protocol SKUIStorePageDelegate <NSObject>

@optional
- (void)storePage:(SKUIStorePageViewController *)arg1 showStorePageForURL:(NSURL *)arg2;
- (void)storePage:(SKUIStorePageViewController *)arg1 showProductPageForItem:(SKUIItem *)arg2;
@end


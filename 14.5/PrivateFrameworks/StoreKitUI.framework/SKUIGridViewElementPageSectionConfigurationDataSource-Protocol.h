//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSIndexPath, SKUIGridViewElementPageSectionConfiguration, SKUIViewElement;

@protocol SKUIGridViewElementPageSectionConfigurationDataSource <NSObject>
- (SKUIViewElement *)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 viewElementForIndexPath:(NSIndexPath *)arg2;

@optional
- (void)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 configurePosition:(inout long long *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedCollectionViewLayoutBlueprintModifierResult, FRFeedCollectionViewUpdateManager;

@protocol FRFeedCollectionViewUpdateManagerDelegate <NSObject>

@optional
- (void)collectionViewUpdateManager:(FRFeedCollectionViewUpdateManager *)arg1 didUpdateViewWithResult:(FRFeedCollectionViewLayoutBlueprintModifierResult *)arg2 success:(_Bool)arg3;
- (void)collectionViewUpdateManager:(FRFeedCollectionViewUpdateManager *)arg1 willUpdateViewWithResult:(FRFeedCollectionViewLayoutBlueprintModifierResult *)arg2;
@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateDelegateHidden;
    _Bool _invalidateDelegateMetrics;
    _Bool _invalidateDelegateOffsetsAndConnections;
}

@property(nonatomic) _Bool invalidateDelegateOffsetsAndConnections; // @synthesize invalidateDelegateOffsetsAndConnections=_invalidateDelegateOffsetsAndConnections;
@property(nonatomic) _Bool invalidateDelegateMetrics; // @synthesize invalidateDelegateMetrics=_invalidateDelegateMetrics;
@property(nonatomic) _Bool invalidateDelegateHidden; // @synthesize invalidateDelegateHidden=_invalidateDelegateHidden;
- (id)init;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class CHVisualizationManager;

@protocol CHVisualizationManagerDelegate <NSObject>
- (void)visualizationManagerNeedsDisplay:(CHVisualizationManager *)arg1;
- (void)visualizationManager:(CHVisualizationManager *)arg1 needsDisplayInRect:(struct CGRect)arg2;

@optional
- (void)visualizationManagerDidUpdateSessionStatus:(CHVisualizationManager *)arg1;
@end


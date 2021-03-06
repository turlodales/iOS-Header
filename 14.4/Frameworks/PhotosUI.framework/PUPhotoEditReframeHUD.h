//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PXHUDView, PXHUDVisualization, UIColor;

__attribute__((visibility("hidden")))
@interface PUPhotoEditReframeHUD : UIView
{
    UIColor *_positiveColor;
    UIColor *_negativeColor;
    PXHUDView *_hudView;
    PXHUDVisualization *_detailVisualization;
    PXHUDVisualization *_pregatedVisualization;
    PXHUDVisualization *_overcaptureVisualization;
    PXHUDVisualization *_subjectsVisualization;
    PXHUDVisualization *_stitchedVisualization;
    PXHUDVisualization *_tripodVisualization;
    PXHUDVisualization *_buildingVisualization;
    PXHUDVisualization *_reframedVisualization;
    PXHUDVisualization *_resultReframeVisualization;
    PXHUDVisualization *_resultPerspectiveVisualization;
    PXHUDVisualization *_resultHorizonVisualization;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXHUDVisualization *resultHorizonVisualization; // @synthesize resultHorizonVisualization=_resultHorizonVisualization;
@property(retain, nonatomic) PXHUDVisualization *resultPerspectiveVisualization; // @synthesize resultPerspectiveVisualization=_resultPerspectiveVisualization;
@property(retain, nonatomic) PXHUDVisualization *resultReframeVisualization; // @synthesize resultReframeVisualization=_resultReframeVisualization;
@property(retain, nonatomic) PXHUDVisualization *reframedVisualization; // @synthesize reframedVisualization=_reframedVisualization;
@property(retain, nonatomic) PXHUDVisualization *buildingVisualization; // @synthesize buildingVisualization=_buildingVisualization;
@property(retain, nonatomic) PXHUDVisualization *tripodVisualization; // @synthesize tripodVisualization=_tripodVisualization;
@property(retain, nonatomic) PXHUDVisualization *stitchedVisualization; // @synthesize stitchedVisualization=_stitchedVisualization;
@property(retain, nonatomic) PXHUDVisualization *subjectsVisualization; // @synthesize subjectsVisualization=_subjectsVisualization;
@property(retain, nonatomic) PXHUDVisualization *overcaptureVisualization; // @synthesize overcaptureVisualization=_overcaptureVisualization;
@property(retain, nonatomic) PXHUDVisualization *pregatedVisualization; // @synthesize pregatedVisualization=_pregatedVisualization;
@property(retain, nonatomic) PXHUDVisualization *detailVisualization; // @synthesize detailVisualization=_detailVisualization;
@property(retain, nonatomic) PXHUDView *hudView; // @synthesize hudView=_hudView;
- (void)showStatsForPhoto:(id)arg1;
@property(copy, nonatomic) NSString *detailText;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView
{
    CPImageSet *_imageSet;
}

+ (struct CGPath *)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (id)balloonWithText:(id)arg1 traitCollection:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;
- (id)_defaultPOI;
- (void)_configure;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)update;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKActionRowItemViewDelegate-Protocol.h>

@class NSArray, UILayoutGuide;
@protocol MKPlaceActionManagerProtocol, _MKPlaceViewControllerDelegate;

@interface MKPlaceCardActionsRowView : UIView <MKActionRowItemViewDelegate>
{
    NSArray *_actionButtons;
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    unsigned long long _style;
    UILayoutGuide *_marginLayoutguide;
    NSArray *_items;
    id <MKPlaceActionManagerProtocol> _actionManager;
    id <_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_MKPlaceViewControllerDelegate> placeViewControllerDelegate; // @synthesize placeViewControllerDelegate=_placeViewControllerDelegate;
@property(nonatomic) __weak id <MKPlaceActionManagerProtocol> actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)actionRowSelected:(id)arg1;
- (void)infoCardThemeChanged;
- (unsigned long long)maxButtonsPerRow;
- (void)invalidateActionButtons;
- (void)layoutButtons;
- (void)createConstraints;
- (void)createActionViews;
- (void)createActions;
- (id)initWithStyle:(unsigned long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarFocusOrderCollection-Protocol.h"

@class CarChromeViewController, CarMapsSuggestionsView, GuidanceETA, MNCommuteDestination, NSArray, NSDictionary, NSString;
@protocol CarCardContentDelegate;

__attribute__((visibility("hidden")))
@interface CarRouteGeniusSuggestionsCardViewController : UIViewController <CarCardContent, CarFocusOrderCollection>
{
    id <CarCardContentDelegate> _cardContentDelegate;
    CarMapsSuggestionsView *_suggestionsView;
}

@property(retain, nonatomic) CarMapsSuggestionsView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
@property(nonatomic) __weak id <CarCardContentDelegate> cardContentDelegate; // @synthesize cardContentDelegate=_cardContentDelegate;
- (void).cxx_destruct;
- (void)updateLayout;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)resignCurrent;
- (void)becomeCurrent;
@property(readonly) CarChromeViewController *chromeViewController;
@property(retain, nonatomic) GuidanceETA *currentETA;
@property(retain, nonatomic) MNCommuteDestination *currentCommuteDestination;
- (void)setRouteIsNavigable:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *dynamicDimensionGuides;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end


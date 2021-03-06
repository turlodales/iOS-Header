//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

#import <MapKit/UIActivityViewControllerAirDropDelegate-Protocol.h>

@class NSString;
@protocol MKActivityViewControllerDelegate;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>
{
    id <MKActivityViewControllerDelegate> _activityControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKActivityViewControllerDelegate> activityControllerDelegate; // @synthesize activityControllerDelegate=_activityControllerDelegate;
- (CDUnknownBlockType)_activityHandler;
- (CDUnknownBlockType)_completionHandler;
- (id)initWithActivityItems:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3;
- (id)initWithShareItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


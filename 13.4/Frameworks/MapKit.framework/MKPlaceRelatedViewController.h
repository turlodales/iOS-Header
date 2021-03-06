//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKMapItem, NSArray, NSString;
@protocol MKPlaceRelatedViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceRelatedViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>
{
    NSArray *_fetchedMapItems;
    NSArray *_cells;
    MKMapItem *_mapItem;
    id <MKPlaceRelatedViewControllerDelegate> _delegate;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
}

+ (id)placeRelatedViewControllerFor:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <MKPlaceRelatedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)_captureSeeAllAction;
- (void)_captureTapActionWithMapItem:(id)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_seeAllAction:(id)arg1;
- (id)_moduleTitle;
- (void)_updateTitle;
- (void)_updateHeightConstraints;
- (void)_updateRows;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)_reloadRelatedMapItems:(id)arg1;
- (void)fetchPOIs;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


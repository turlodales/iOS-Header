//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSource.h>

@class NSObject, PXCMMPhotoKitPeopleSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMPhotoKitPeopleSuggestionsDataSource : PXCMMPeopleSuggestionsDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end


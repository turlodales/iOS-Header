//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAssetActionManager.h>

@class PXAssetActionManager;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionManager : PUAssetActionManager
{
    PXAssetActionManager *_underlyingActionManager;
}

- (void).cxx_destruct;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)_selectionSnapshotForAssetReferences:(id)arg1;
- (id)px_selectionManager;
- (id)initWithUnderlyingActionManager:(id)arg1;
- (id)init;

@end


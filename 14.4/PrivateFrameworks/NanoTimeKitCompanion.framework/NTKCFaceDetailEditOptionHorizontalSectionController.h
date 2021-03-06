//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailEditOptionCellDelegate-Protocol.h>

@class NSMutableArray, NSString, NTKCFaceDetailEditOptionCell;

@interface NTKCFaceDetailEditOptionHorizontalSectionController : NTKCFaceDetailEditOptionSectionController <NTKCFaceDetailEditOptionCellDelegate>
{
}

- (Class)editCellClass;
- (void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2;
- (_Bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (void)reloadActionRow;
- (void)setSelectedOptions:(id)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;

// Remaining properties
@property(retain, nonatomic) NTKCFaceDetailEditOptionCell *cell; // @dynamic cell;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *rows; // @dynamic rows;
@property(readonly) Class superclass;

@end


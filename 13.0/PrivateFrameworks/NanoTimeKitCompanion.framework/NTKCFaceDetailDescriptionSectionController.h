//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailExpandableDescriptionCellDelegate-Protocol.h>

@class NSString, NTKCFaceDetailExpandableDescriptionCell;
@protocol NTKCFaceDetailDescriptionSectionDelegate;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate>
{
    _Bool _external;
    id <NTKCFaceDetailDescriptionSectionDelegate> _delegate;
}

+ (id)_descriptionForFace:(id)arg1 inGallery:(_Bool)arg2 orExternal:(_Bool)arg3;
+ (_Bool)hasDescriptionSectionForFace:(id)arg1 inGallery:(_Bool)arg2 orExternal:(_Bool)arg3;
@property(nonatomic) _Bool external; // @synthesize external=_external;
@property(nonatomic) __weak id <NTKCFaceDetailDescriptionSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)descriptionCellDidExpand:(id)arg1;
- (id)_faceDescription;
@property(nonatomic) _Bool expanded;
- (void)faceDidChange;
- (id)titleForHeader;
- (void)_commonInit;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(_Bool)arg3 external:(_Bool)arg4;

// Remaining properties
@property(retain, nonatomic) NTKCFaceDetailExpandableDescriptionCell *cell; // @dynamic cell;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


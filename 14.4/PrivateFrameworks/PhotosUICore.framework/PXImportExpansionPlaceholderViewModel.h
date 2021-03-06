//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXImportItemViewModel.h>

@class NSDate;

@interface PXImportExpansionPlaceholderViewModel : PXImportItemViewModel
{
    NSDate *_placeholderDate;
    id _placeholderUUID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id placeholderUUID; // @synthesize placeholderUUID=_placeholderUUID;
@property(readonly, nonatomic) NSDate *placeholderDate; // @synthesize placeholderDate=_placeholderDate;
- (long long)badgeType;
- (id)fileCreationDate;
- (id)fileName;
- (id)uuid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImportPlaceholderViewModel:(id)arg1;
- (id)description;
- (id)initWithPlaceholderDate:(id)arg1;

@end


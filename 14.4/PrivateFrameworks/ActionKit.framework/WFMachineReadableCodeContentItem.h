//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@class NSString, WFMachineReadableCode;

@interface WFMachineReadableCodeContentItem : WFGenericFileContentItem <WFContentItemClass>
{
    _Bool _prefersImage;
    NSString *_errorCorrectionLevel;
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)qrCodeItemWithString:(id)arg1 errorCorrectionLevel:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorCorrectionLevel; // @synthesize errorCorrectionLevel=_errorCorrectionLevel;
@property(nonatomic) _Bool prefersImage; // @synthesize prefersImage=_prefersImage;
- (id)preferredFileType;
- (id)preferredObjectType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateImageOfSize:(struct CGSize)arg1 withErrorCorrectionLevel:(id)arg2 error:(id *)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) WFMachineReadableCode *codeObject;

@end


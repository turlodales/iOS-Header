//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderUI/NSCopying-Protocol.h>

@class NSString;

@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying>
{
    double _rowHeight;
    double _shouldHighlight;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _accessoryButtonTapHandler;
    Class _cellClass;
    NSString *_cellReuseIdentifier;
    CDUnknownBlockType _cellCustomizationHandler;
    CDUnknownBlockType _cellWillDisplayHandler;
    long long _cellSelectionStyle;
}

+ (id)defaultCellReuseIdentifier;
+ (Class)defaultCellClass;
- (void).cxx_destruct;
@property(nonatomic) long long cellSelectionStyle; // @synthesize cellSelectionStyle=_cellSelectionStyle;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler; // @synthesize cellWillDisplayHandler=_cellWillDisplayHandler;
@property(copy, nonatomic) CDUnknownBlockType cellCustomizationHandler; // @synthesize cellCustomizationHandler=_cellCustomizationHandler;
@property(copy, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
@property(copy, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonTapHandler; // @synthesize accessoryButtonTapHandler=_accessoryButtonTapHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) double shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


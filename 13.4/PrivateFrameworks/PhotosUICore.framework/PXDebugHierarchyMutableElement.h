//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXDebugHierarchyElement-Protocol.h>

@class NSString;

@interface PXDebugHierarchyMutableElement : NSObject <PXDebugHierarchyElement, NSCopying>
{
    _Bool _canHaveChildren;
    unsigned long long _identifier;
    double _zPosition;
    double _alpha;
    struct CGImage *_previewImage;
    NSString *_contentsGravity;
    struct CGColor *_backgroundColor;
    NSString *_name;
    unsigned long long _parentIdentifier;
    struct CGRect _frame;
    struct CGRect _contentsRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(nonatomic) _Bool canHaveChildren; // @synthesize canHaveChildren=_canHaveChildren;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *contentsGravity; // @synthesize contentsGravity=_contentsGravity;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) struct CGImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double zPosition; // @synthesize zPosition=_zPosition;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForReuse;
- (id)init;

@end


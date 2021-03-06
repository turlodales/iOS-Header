//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface OKPresentationWidget : OKPresentationCanvas
{
    NSString *_templateName;
    NSString *_internalName;
    NSString *_internalClassName;
    NSMutableDictionary *_internalSettings;
    NSMutableDictionary *_internalUserData;
    NSMutableArray *_internalSubWidgets;
    NSMutableArray *_internalMaterials;
    NSString *_className;
    NSMutableArray *_subWidgets;
    NSMutableArray *_materials;
}

+ (id)widgetWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5 subWidgets:(id)arg6 materials:(id)arg7;
@property(copy, nonatomic) NSMutableArray *materials; // @synthesize materials=_materials;
@property(readonly, copy, nonatomic) NSMutableArray *subWidgets; // @synthesize subWidgets=_subWidgets;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void)resolveIfNeeded;
- (id)canvasWithName:(id)arg1;
- (id)materialWithName:(id)arg1;
- (id)subWidgetWithName:(id)arg1;
- (id)widgetTemplate;
- (id)parentWidget;
- (id)parentPage;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3;
- (id)init;

@end


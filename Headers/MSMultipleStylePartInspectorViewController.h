#import "CHViewController.h"

#import "MSReorderingContainerDelegate.h"

@class MSReorderingContainerView, NSArray, NSButton, NSString, NSTextField, NSView;

@interface MSMultipleStylePartInspectorViewController : CHViewController <MSReorderingContainerDelegate>
{
    NSArray *_layers;
    NSArray *_stylePartViewControllers;
    id <MSStylePartInspectorDelegate> _delegate;
    MSReorderingContainerView *_reorderingContainer;
    NSTextField *_nameField;
    NSTextField *_nameFieldShadow;
    NSView *_nameView;
    NSButton *_removeDisabledStylesButton;
    NSButton *_showAdvancedOptionsButton;
}

@property(retain, nonatomic) NSButton *showAdvancedOptionsButton; // @synthesize showAdvancedOptionsButton=_showAdvancedOptionsButton;
@property(retain, nonatomic) NSButton *removeDisabledStylesButton; // @synthesize removeDisabledStylesButton=_removeDisabledStylesButton;
@property(retain, nonatomic) NSView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) NSTextField *nameFieldShadow; // @synthesize nameFieldShadow=_nameFieldShadow;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MSReorderingContainerView *reorderingContainer; // @synthesize reorderingContainer=_reorderingContainer;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *stylePartViewControllers; // @synthesize stylePartViewControllers=_stylePartViewControllers;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)prepareInspector:(id)arg1 parts:(id)arg2 index:(unsigned long long)arg3;
- (BOOL)hasEnabledStyle;
- (void)dealloc;
- (void)prepareParentForDisplay;
- (double)startingOffsetForStackingContainerBackground:(id)arg1;
- (void)containerBackground:(id)arg1 dragDidReorderChildAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)stylePartKeyPath;
- (void)deleteUnusedStylePartsAction:(id)arg1;
- (unsigned long long)tagFromSender:(id)arg1;
- (void)duplicateStylePartAction:(id)arg1;
- (void)deleteStylePartAction:(id)arg1;
- (id)addStylePartsForSelection;
- (BOOL)hasPopOver;
- (id)lastEnabledStylePartController;
- (void)addStylePartAction:(id)arg1;
- (id)rotatedStyleParts;
- (void)validateSpecialButtons;
- (void)prepare;
- (void)prepareForReuse;
- (id)viewForStyleAtOffset:(long long)arg1 index:(unsigned long long)arg2;
- (void)styleDidEnableOrDisable;
- (void)resizeViewToFit;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)validateAdvancedOptionsButton;
- (void)validateRemoveDisabledStylesButton;
- (void)loadViewControllers;
- (void)awakeFromNib;
- (id)nibName;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


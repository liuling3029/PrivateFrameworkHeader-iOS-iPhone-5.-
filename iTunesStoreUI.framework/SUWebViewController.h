/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, SUObjectPool, SUDelayedNavigationItem, SUWebView, SUStorePageProtocol, SUTableViewController, SUItem, SUStructuredPage, SSAuthenticationContext;

@interface SUWebViewController : SUViewController <SUWebViewDelegate> {
    SSAuthenticationContext *_authenticationContext;
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    int _lastKnownOrientation;
    SUObjectPool *_objectPool;
    SUItem *_rootItem;
    int _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    int _style;
    SUStructuredPage *_trackList;
    SUTableViewController *_trackListController;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebView *_webView;
}

@property int style;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL viewIsReady;
@property(readonly) SUWebView * webView;


- (void)applicationWillEnterForeground;
- (void)invalidate;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (BOOL)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)webView;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)dealloc;
- (void)_setLastKnownOrientation:(int)arg1;
- (void)_setTrackListController:(id)arg1;
- (void)_updateTrackListRootItem;
- (id)newDataProviderToProcessProtocol;
- (void)_selectTrackListItemWithIdentifier:(id)arg1;
- (void)_handleTrackList:(id)arg1;
- (void)_handleRootObject:(id)arg1;
- (void)_handleProtocol:(id)arg1;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)_reloadUI;
- (void)_reloadObjectPool;
- (void)_removePlaceholderBackgroundView;
- (void)setViewIsReady:(BOOL)arg1;
- (void)_addPlaceholderBackgroundView;
- (void)_reloadPlaceholderBackgroundView;
- (id)_placeholderBackgroundView;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (void)_applyScriptProperties:(id)arg1;
- (id)newViewControllerForTrackList:(id)arg1;
- (void)setStorePageProtocol:(id)arg1;
- (id)navigationItemForScriptInterface;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (BOOL)viewIsReady;
- (void)operationFinished:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)applicationDidEnterBackground;
- (id)newRotationController;
- (void)storePageProtocolDidChange;
- (id)storePageProtocol;
- (void)parentViewControllerHierarchyDidChange;
- (void)setScriptProperties:(id)arg1;
- (id)copyScriptProperties;
- (id)copyDefaultScriptProperties;
- (void)setAuthenticationContext:(id)arg1;
- (id)authenticationContext;
- (void)webView:(id)arg1 willInjectScriptObject:(id)arg2;
- (void)webView:(id)arg1 documentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webView:(id)arg1 receivedEventOfType:(int)arg2 userInfo:(id)arg3;
- (void)webView:(id)arg1 foundPropertyList:(id)arg2 ofType:(int)arg3;
- (void)webView:(id)arg1 performPurchaseAnimationWithView:(id)arg2;
- (id)parentViewControllerForWebView:(id)arg1;
- (id)copyArchivableContext;

@end
